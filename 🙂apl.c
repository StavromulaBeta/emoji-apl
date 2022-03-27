/*
BSD 2-Clause License

Copyright (c) 2022, Finn Barber
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

#define LEN 16192

char *glyphs[][2] =
{
	{"🇦", "a"},
	{"🇧", "b"},
	{"🇨", "c"},
	{"🇩", "d"},
	{"🇪", "e"},
	{"🇫", "f"},
	{"🇬", "g"},
	{"🇭", "h"},
	{"🇮", "i"},
	{"🇯", "j"},
	{"🇰", "k"},
	{"🇱", "l"},
	{"🇲", "m"},
	{"🇳", "n"},
	{"🇴", "o"},
	{"🇵", "p"},
	{"🇶", "q"},
	{"🇷", "r"},
	{"🇸", "s"},
	{"🇹", "t"},
	{"🇺", "u"},
	{"🇻", "v"},
	{"🇼", "w"},
	{"🇽", "x"},
	{"🇾", "y"},
	{"🇿", "z"},
	{"⓿", "0"},
	{"➊", "1"},
	{"➋", "2"},
	{"➌", "3"},
	{"➍", "4"},
	{"➎", "5"},
	{"➏", "6"},
	{"➐", "7"},
	{"➑", "8"},
	{"➒", "9"},
	{"🗨️", "⍝"},
	{"✍️", "'"},
	{"🧮", "+"},
	{"🥖", "-"},
	{"⚔️", "×"},
	{"🪓", "÷"},
	{"📈", "⌈"},
	{"📉", "⌊"},
	{"🤯", "*"},
	{"🪵", "⍟"},
	{"🥧", "○"},
	{"📢", "!"},
	{"🎲", "?"},
	{"📏", "|"},
	{"🐜", "∧"},
	{"🛶", "∨"},
	{"🕷", "⍲"},
	{"⛵", "⍱"},
	{"⚖️", "="},
	{"😠", "≠"},
	{"🤝", "≡"},
	{"😡", "≢"},
	{"🔬", "<"},
	{"🤏", "≤"},
	{"🦣", "≥"},
	{"⛰️", ">"},
	{"☝️", "⌷"},
	{"👍", "↑"},
	{"👎", "↓"},
	{"📐", "⍴"},
	{"🪺", "⊂"},
	{"⛏️", "⊃"},
	{"⬅️", "⊣"},
	{"➡️", "⊢"},
	{"🦄", "∪"},
	{"🙏", "∩"},
	{"🙅", "~"},
	{"📚", "⍳"},
	{"👀", "⍸"},
	{"📜", "∊"},
	{"🔎", "⍷"},
	{"🤰", "/"},
	{"🌿", "\\"},
	{"🧬", "⌿"},
	{"🌱", "⍀"},
	{"🙃", "⌽"},
	{"🤣", "⊖"},
	{"😍", ","},
	{"❤️", "⍪"},
	{"🎶", "⍉"},
	{"🔢", "⊥"},
	{"🔡", "⊤"},
	{"🐇", "⌹"},
	{"🏷", "⍎"},
	{"💾", "⍕"},
	{"🧗", "⍋"},
	{"⛷", "⍒"},
	{"🍑", "¨"},
	{"😵", "⍨"},
	{"🚀", "⌶"},
	{"🔑", "⌸"},
	{"🐣", "&"},
	{"👉", "["},
	{"👈", "]"},
	{"🤐", "∘"},
	{"😬", "⍣"},
	{"🔧", "⍠"},
	{"✏️", "⌺"},
	{"😱", "⍤"},
	{"🌍", "@"},
	{"🔴", "."},
	{"🏁", "→"},
	{"🚧", "⋄"},
	{"💂", ":"},
	{"🌜", "{"},
	{"🌛", "}"},
	{"🤔", "⍵"},
	{"🥺", "⍺"},
	{"😶", "⍬"},
	{"😳", "∇"},
	{"🌳", "#"},
	{"🪧", "←"},
	{"🎮", "⎕"},
	{"⌨️", "⍞"},
	{"🥶", "¯"},
	{"🤱", "("},
	{"🎅", ")"},
};

// Unfortunately, this is the last comment you're getting

void throw_error(char *fmt, ...)
{
	fputs("\n\033[31;1m", stderr);
	va_list args;
	va_start(args, fmt);
	vfprintf(stderr, fmt, args);
	fputs("\033[0m\n", stderr);
}

int main(int argc, char **argv)
{
	char* string_delim = strdup("✍️");
	char* comment_delim = strdup("🗨️");
	puts(" ___                          ___,  , __    _\n"
		 "/ (_)                o o     /   | /|/  \\\\_|_)\n"
		 "\\__   _  _  _    __         |    |  |___/  |\n"
		 "/    / |/ |/ |  /  \\_| |    |    |  |     _|\n"
		 "\\___/  |  |  |_/\\__/ |/|_/   \\__/\\_/|    (/\\___/\n"
		 "                    /|\n"
		 "   Copyright 2022   \\|   Finn Barber\n");
	if (!setlocale(LC_ALL, ""))
		throw_error("cannot set locale");
	for (size_t i = 0; i < sizeof glyphs / sizeof glyphs[0]; ++i)
	{
		glyphs[i][0] = strdup(glyphs[i][0]);
		glyphs[i][0][mblen(glyphs[i][0], MB_CUR_MAX)] = '\0';
	}
	string_delim[mblen(string_delim, MB_CUR_MAX)] = '\0';
	comment_delim[mblen(comment_delim, MB_CUR_MAX)] = '\0';
	static char buf[LEN];
	int apl_in[2];
	pipe(apl_in);
	if (!fork())
	{
		close(0);
		dup(apl_in[0]);
		char *aplargs[argc + 3];
		aplargs[0] = argv[0];
		aplargs[1] = "-s";
		aplargs[2] = "--";
		for (int i = 1; i < argc; ++i)
			aplargs[i + 2] = argv[i];
		aplargs[argc + 2] = NULL;
		int apl_out[2];
		pipe(apl_out);
		if (!fork())
		{
			close(0);
			dup(apl_out[0]);
			static char buf[LEN];
			while (fgets(buf, sizeof buf, stdin)) printf("►  %s", buf);
		}
		close(1);
		dup(apl_out[1]);
		return execvp("apl", aplargs);
	}
	int out = apl_in[1];
	while (fgets(buf, sizeof buf, stdin))
	{
		_Bool string = 0;
		_Bool comment = 0;
		char *line = buf;
		while (*line)
		{
			int sz = mblen(line, MB_CUR_MAX);
			char chr[sz + 1];
			memcpy(chr, line, sz);
			chr[sz] = '\0';
			if (!strcmp(string_delim, chr)) string = !string;
			else if (string || comment || isspace(*chr))
			{
				write(out, chr, sz);
				goto next_char;
			}
			if (!strcmp(comment_delim, chr)) comment = 1;
			for (int i = 0; i < (sizeof glyphs / sizeof glyphs[0]); ++i)
			{
				if (!strcmp(glyphs[i][0], chr))
				{
					write(out, glyphs[i][1], strlen(glyphs[i][1]));
					goto next_char;
				}
			}
			if (!isgraph(*chr)) goto next_char;
			throw_error("invalid glyph '%s' (0x%lx)", chr, *(long *)chr, strlen(chr));
			goto next_line;
next_char:
			line += sz;
		}
		if (string) throw_error("unterminated string");
	next_line:;
	}
	write(out, "\n", 1);
}
