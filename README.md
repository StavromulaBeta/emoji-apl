# ๐ APL

This idea has been holding my brain hostage, I hope that implementing it will restore my free will.

```
๐จ๏ธ The canonical game of life function, called LI (Liechtenstein)
๐ฑ๐ฎ๐ชง๐๐๐โ ๐ค๐ถ๐ด๐โ โโ๏ธ๐งฎ๐คฐ๐๐ฅถโ โฟ โ๐ค๐ด๐คฃ๐ฅถโ โฟ โ๐ค๐ด๐๐ชบ๐ค๐

๐จ๏ธ An array containing a glider, called GL (Greenland)
๐ฌ๐ฑ๐ชงโ โ๐โ โ โ โ โฟ โฟ โฟ โ โฟ

๐จ๏ธ The 8x8 grid to use, called GR (Greece)
๐ฌ๐ท๐ชง๐ฅถโ ๐ฅถโ๐๐ฌ๐ฑ

๐จ๏ธ Print the first 4 steps to the screen
๐ฎ๐ชง๐๐ฑ๐ฎ๐ฌ๐คโก๏ธ๐ฌ๐ท๐๐โฟ๐๐โ
```

## What?

It's APL, but instead of the symbols I used emojis. For example ยจ (each) is now ๐ (peach), โง (and) is now ๐ (ant), and โฝ (reverse) is ๐.

## How?

I didn't implement an entire APL for this (thank god), this uses GNU APL under the hood. You will need this installed. I wrote the translator itself in C, because APL didn't seem to like unicode strings much.

## Why?

Why not?

## Features

- Many terrible puns
- Names condense into flags to save space
- Arguably more intuitive symbols than normal APL
- There is no good reason to use this

## Character map

| ๐APL Emoji | APL Symbol |
|-------------|------------|
|	๐ฆ  | a |
|	๐ง  | b |
|	๐จ  | c |
|	๐ฉ  | d |
|	๐ช  | e |
|	๐ซ  | f |
|	๐ฌ  | g |
|	๐ญ  | h |
|	๐ฎ  | i |
|	๐ฏ  | j |
|	๐ฐ  | k |
|	๐ฑ  | l |
|	๐ฒ  | m |
|	๐ณ  | n |
|	๐ด  | o |
|	๐ต  | p |
|	๐ถ  | q |
|	๐ท  | r |
|	๐ธ  | s |
|	๐น  | t |
|	๐บ  | u |
|	๐ป  | v |
|	๐ผ  | w |
|	๐ฝ  | x |
|	๐พ  | y |
|	๐ฟ  | z |
|	โฟ  | 0 |
|	โ  | 1 |
|	โ  | 2 |
|	โ  | 3 |
|	โ  | 4 |
|	โ  | 5 |
|	โ  | 6 |
|	โ  | 7 |
|	โ  | 8 |
|	โ  | 9 |
|	๐จ๏ธ  | โ |
|	โ๏ธ  | ' |
|	๐งฎ | + |
|	๐ฅ | - |
|	โ๏ธ  | ร |
|	๐ช | รท |
|	๐ | โ |
|	๐ | โ |
|	๐คฏ | * |
|	๐ชต | โ |
|	๐ฅง | โ |
|	๐ข | ! |
|	๐ฒ | ? |
|	๐ | \| |
|	๐ | โง |
|	๐ถ | โจ |
|	๐ท  | โฒ |
|	โต | โฑ |
|	โ๏ธ  | = |
|	๐? | โ? |
|	๐ค | โก |
|	๐ก | โข |
|	๐ฌ | < |
|	๐ค | โค |
|	๐ฆฃ | โฅ |
|	โฐ๏ธ  | > |
|	โ๏ธ  | โท |
|	๐ | โ |
|	๐ | โ |
|	๐ | โด |
|	๐ชบ  | โ |
|	โ๏ธ  | โ |
|	โฌ๏ธ  | โฃ |
|	โก๏ธ  | โข |
|	๐ฆ | โช |
|	๐ | โฉ |
|	๐ | ~ |
|	๐ | โณ |
|	๐ | โธ |
|	๐ | โ |
|	๐ | โท |
|	๐คฐ | / |
|	๐ฟ | \ |
|	๐งฌ | โฟ |
|	๐ฑ | โ |
|	๐ | โฝ |
|	๐คฃ | โ |
|	๐ | , |
|	โค๏ธ  | โช |
|	๐ถ | โ |
|	๐ข | โฅ |
|	๐ก | โค |
|	๐ | โน |
|	๐ท  | โ |
|	๐พ | โ |
|	๐ง | โ |
|	โท  | โ |
|	๐ | ยจ |
|	๐ต | โจ |
|	๐ | โถ |
|	๐ | โธ |
|	๐ฃ | & |
|	๐ | [ |
|	๐ | ] |
|	๐ค | โ |
|	๐ฌ | โฃ |
|	๐ง | โ? |
|	โ๏ธ | โบ |
|	๐ฑ | โค |
|	๐ | @ |
|	๐ด | . |
|	๐ | โ |
|	๐ง | โ |
|	๐ | : |
|	๐ | { |
|	๐ | } |
|	๐ค | โต |
|	๐ฅบ | โบ |
|	๐ถ | โฌ |
|	๐ณ | โ |
|	๐ณ | # |
|	๐ชง | โ |
|	๐ฎ | โ |
|	โจ๏ธ | โ |
|	๐ฅถ | ยฏ |
|	๐คฑ | ( |
|	๐ | ) |

## FAQ

### Why are the brackets ๐คฑ and ๐?
The parens are parents.

### Why do identifiers turn into flags?
I don't know.

### An Emoji programming language already exists(?)
Yes, but [Emojicode](https://www.emojicode.org) is a traditional programming language, not an APL - where's the fun in that?

### How do I install this?
Make sure you have a C compiler and GNU APL, then run `make` and then `sudo make install`. The command to invoke the repl is `๐apl` and you can pipe output to the repl such as `cat life.๐apl | ๐apl`.
