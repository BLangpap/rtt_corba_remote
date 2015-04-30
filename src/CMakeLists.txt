rock_library(rtt_corba_remote
    SOURCES CorbaNameService.cpp CorbaTaskContextServer.cpp
    HEADERS CorbaNameService.hpp CorbaTaskContextServer.hpp
    DEPS_PKGCONFIG
	orocos-rtt-gnulinux
      )
