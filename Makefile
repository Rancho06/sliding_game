#############################################################################
# Makefile for building: game_shuzhou
# Generated by qmake (2.01a) (Qt 4.8.1) on: Tue Apr 30 21:03:33 2013
# Project:  game_shuzhou.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile game_shuzhou.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = basketball.cpp \
		bomb.cpp \
		bullet.cpp \
		graphicswindow.cpp \
		intoolbar.cpp \
		main_window.cpp \
		mylayout.cpp \
		plane.cpp \
		player.cpp \
		qtgame.cpp \
		rock.cpp \
		soldier.cpp \
		tank.cpp \
		thing.cpp moc_intoolbar.cpp \
		moc_main_window.cpp \
		moc_player.cpp
OBJECTS       = basketball.o \
		bomb.o \
		bullet.o \
		graphicswindow.o \
		intoolbar.o \
		main_window.o \
		mylayout.o \
		plane.o \
		player.o \
		qtgame.o \
		rock.o \
		soldier.o \
		tank.o \
		thing.o \
		moc_intoolbar.o \
		moc_main_window.o \
		moc_player.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		game_shuzhou.pro
QMAKE_TARGET  = game_shuzhou
DESTDIR       = 
TARGET        = game_shuzhou

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: game_shuzhou.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile game_shuzhou.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile game_shuzhou.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/game_shuzhou1.0.0 || $(MKDIR) .tmp/game_shuzhou1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/game_shuzhou1.0.0/ && $(COPY_FILE) --parents basketball.h bomb.h bullet.h graphicswindow.h intoolbar.h main_window.h mylayout.h plane.h player.h rock.h soldier.h tank.h thing.h .tmp/game_shuzhou1.0.0/ && $(COPY_FILE) --parents basketball.cpp bomb.cpp bullet.cpp graphicswindow.cpp intoolbar.cpp main_window.cpp mylayout.cpp plane.cpp player.cpp qtgame.cpp rock.cpp soldier.cpp tank.cpp thing.cpp .tmp/game_shuzhou1.0.0/ && (cd `dirname .tmp/game_shuzhou1.0.0` && $(TAR) game_shuzhou1.0.0.tar game_shuzhou1.0.0 && $(COMPRESS) game_shuzhou1.0.0.tar) && $(MOVE) `dirname .tmp/game_shuzhou1.0.0`/game_shuzhou1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/game_shuzhou1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_intoolbar.cpp moc_main_window.cpp moc_player.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_intoolbar.cpp moc_main_window.cpp moc_player.cpp
moc_intoolbar.cpp: main_window.h \
		graphicswindow.h \
		mylayout.h \
		thing.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h \
		intoolbar.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) intoolbar.h -o moc_intoolbar.cpp

moc_main_window.cpp: graphicswindow.h \
		mylayout.h \
		thing.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h \
		main_window.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) main_window.h -o moc_main_window.cpp

moc_player.cpp: thing.h \
		player.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) player.h -o moc_player.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

basketball.o: basketball.cpp basketball.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o basketball.o basketball.cpp

bomb.o: bomb.cpp bomb.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bomb.o bomb.cpp

bullet.o: bullet.cpp bullet.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bullet.o bullet.cpp

graphicswindow.o: graphicswindow.cpp graphicswindow.h \
		mylayout.h \
		thing.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h \
		main_window.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o graphicswindow.o graphicswindow.cpp

intoolbar.o: intoolbar.cpp intoolbar.h \
		main_window.h \
		graphicswindow.h \
		mylayout.h \
		thing.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o intoolbar.o intoolbar.cpp

main_window.o: main_window.cpp main_window.h \
		graphicswindow.h \
		mylayout.h \
		thing.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h \
		intoolbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main_window.o main_window.cpp

mylayout.o: mylayout.cpp mylayout.h \
		thing.h \
		graphicswindow.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mylayout.o mylayout.cpp

plane.o: plane.cpp plane.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o plane.o plane.cpp

player.o: player.cpp player.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o player.o player.cpp

qtgame.o: qtgame.cpp main_window.h \
		graphicswindow.h \
		mylayout.h \
		thing.h \
		tank.h \
		plane.h \
		rock.h \
		soldier.h \
		bullet.h \
		bomb.h \
		player.h \
		basketball.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtgame.o qtgame.cpp

rock.o: rock.cpp rock.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rock.o rock.cpp

soldier.o: soldier.cpp soldier.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o soldier.o soldier.cpp

tank.o: tank.cpp tank.h \
		thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tank.o tank.cpp

thing.o: thing.cpp thing.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o thing.o thing.cpp

moc_intoolbar.o: moc_intoolbar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_intoolbar.o moc_intoolbar.cpp

moc_main_window.o: moc_main_window.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_main_window.o moc_main_window.cpp

moc_player.o: moc_player.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_player.o moc_player.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

