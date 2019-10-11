# Embedding-Lua
Small example on embedding Lua in C++ with Luna

The example works by making use of the proxy pattern:
We declare and define a Speaker.cpp class and encapsulate it in a LuaSpeaker.cpp that holds a pointer to the main object.
LuaSpeaker.cpp exposes the functionality of Speaker.cpp to Lua and redirects all method calls to the real object.

to understand the code I recommend looking at it in the following order:

Speaker -> LuaSpeaker -> main -> speakers.lua

Sources:
- http://lua-users.org/wiki/LunaFive
- http://lua-users.org/wiki/CppObjectBinding
- http://blog.p86.dk/?p=289
- https://iantmason.wordpress.com/2014/02/06/cpp-lua-binding-with-luna/
