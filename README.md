# libUIO-Hello-World-Cmake

Modified hello app tested with yocto. Check the complete tutorial in 
[the upstream](https://github.com/amamory-embedded/learning-yocto/) repository.

Note this version requires custom device tree bits and properly setup UIO
mem regions, etc. Otherwise you get to see it print an error message.

The bitbake recipe for this (modified) version lives in the (enclustra)
[user layer](https://github.com/VCTLabs/meta-user-aa1/tree/oe-mickledore)
while the top-level "project" repo is [here](https://github.com/VCTLabs/vct-enclustra-bsp-platform)
