
-- Start up a new LuaGameObject wrapper class and pass the global speakerPtr
-- C++ speakerPtr pointer into it
local mySpeaker = LuaSpeaker(speakerPtr)

-- Call a Lua function on this object
print("a CPP Speaker is speaking from lua!")
mySpeaker:Speak("Hello, world! dib dubi doo")