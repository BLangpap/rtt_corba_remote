rock_library(rtt_corba_remote
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rtt_corba_remote_bin Main.cpp
    DEPS rtt_corba_remote)

