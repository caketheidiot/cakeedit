##  CakeEdit 
##  
##
##  This program is free software: you can redistribute it and/or modify
##  it under the terms of the GNU General Public License as published by
##  the Free Software Foundation, either version 3 of the License, or
##  (at your option) any later version.
##  
##  This program is distributed in the hope that it will be useful,
##  but WITHOUT ANY WARRANTY; without even the implied warranty of
##  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##  GNU General Public License for more details.
##  
##  You should have received a copy of the GNU General Public License
##  along with this program.  If not, see <http://www.gnu.org/licenses/>.

DESTDIR =
PREFIX  = /usr/local


BINDIR  = $(PREFIX)/bin

build/cakeedit:
	mkdir -p build
        
	gcc -o cakeedit.bin main.c -Wall -Wextra -Werror -Wuninitialized
install: install-exec 

install-exec: build/cakeedit
	install -d "$(DESTDIR)$(BINDIR)"

	install build/cakeedit "$(DESTDIR)$(BINDIR)/cakeedit.bin"
	echo -e "#!/bin/sh\nexec \"$(BINDIR)/cakeedit.bin\" > "$(DESTDIR)$(BINDIR)/cakeedit"
	chmod 755 "$(DESTDIR)$(BINDIR)/cakeedit"

