## Notice

I am working on this to learning about embedded programming.
It will probably take me a while to get up to speed to be able to contribute to the
`mbed-os` project.

Most of the work I am going to do is experimental and driven by my own curiosity.

I am starting my exploration from mbed-os version 6 when developers round the world were
still writing the code themselves. To be accurate the mbed-os community edition has
reasonable LLM usage guidelines, which can be consulted via this
[link](https://mbed-ce.dev/for-developers/llm-policy/).
Despite of the soundness of those guidelines, I still opted to start my work at an earlier
time. Thanks to the freedom that open source provides I am able to do this for the sake
of learning and honing my software development skills.

## Progress

### Building the source code with GNU Make

Don't get me wrong I love Python but for very particular tasks, for everything else not
so much. Getting to the point I am not trying to build the mbed-os code with
GNU Make because of want of love for the Python build scripts, my motivation is purely
academic so bear it with me if you think doing this is foolish. From my perspective
there's nothing better than trying to do things on your own. (It's like trying to solve
a puzzle while trying to learn what you need to actually even attempt to solve it.)
At worst I would get to see the benefit of the build scripts. And at best
(which is what I am aiming for) I will get to build the code with my preferred tool.

Last but not least, I have no intention of building the mbed source code for every target
that mbed-os supports. For me just one is all that I need, so this is a task that can be
done by a lone developer on his spare time. (I rather do this than watch a movie or
a TV series or anything else that involves sitting in front of a screen.)

Achievements as of commit [f56198e6](https://github.com/misael-diaz/mbed-os/tree/f56198e6a73196e34bf4dd71821fe93e56dad392):

- using makefiles to just build the Nordic NRF51822 code (this is my target MCU)
- have been able to build the code for the target MCU
- currently working on adding the rules to build the platform code, at this point I have
  been able to build both C and C++ source files including those that require the use
  of internal CXX headers.
- have been able to use reasonable values for configuration macros in part thanks to the
  compile-time assertions that the mbed developers had in place
