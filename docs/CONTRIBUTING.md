# Contributing

As this project is in its very early stages, its hard to put guidelines on something that will evolve over time as contributors gain a better understanding of the game's internals.

While almost all source paths aren't known, a few .cpp file names do appear in the Wii U Edition's global static constructors, along with a couple asserts giving file paths. Follow these file names wherever possible.

Another point of reference is the Switch Edition, showing us the file path to `Minecraft.World/Calendar.cpp` and some other files in that folder. World generation should be stored in this folder based on `MinecraftWorld_RunStaticCtors` routing all worldgen static constructors inside of the folder.

For another point of reference, you could also look at [the Minecraft: Pocket Edition decompilation](https://github.com/MCPE-RE/0.1.3j-core) for more inspiration. As a matter of fact, a lot of classes from that decompilation project share function names with this game's symbols. Both editions originated from Notch's messy Minecraft beta code, so it's no wonder that a lot of names were probably copied from Mojang's official mappings at the time.
