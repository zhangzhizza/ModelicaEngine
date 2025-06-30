import asyncio

from asyncua import Client


async def main():
    url = "opc.tcp://localhost:4802"
    async with Client(url=url) as client:
        children = await client.nodes.root.get_children()
        objects_root = children[0]
        objects = await objects_root.get_children()
        print(await objects[0].read_browse_name())
        for i in range(len(objects)):
            obj_name = await objects[i].read_browse_name()
            print(i, obj_name.Name)

        await objects[1001].set_value(1.4)
        await objects[1].set_value(True)

        print(await objects[1001].get_value())
        print(dir(objects[1001]))
        path = await objects[1].get_path()
        print(path)
        path_strs = await get(path)

        print(path_strs)
        node = await client.nodes.root.get_child(["0:Objects", "1:x_Tdb"])
        print(await node.get_value())
        await node.set_value(float(3))


async def get(path):
    path_strs = []
    for path_i in path:
        print(dir(path_i))
        print(await path_i.get_path())
        browse_name = await path_i.read_browse_name()
        print(dir(browse_name))
        path_strs.append(browse_name.to_string())
    return path_strs


asyncio.run(main())
