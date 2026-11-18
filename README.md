# CGPA Calculator (C)

A small terminal CGPA calculator written in C. Type in each subject's code, credit hours and GPA, and it prints a neat table and your CGPA, weighted by credits. No spreadsheet and no app needed, just a C compiler.

There is also an Android version: [CGPA Calculator on OpenStore](https://openstore.pfay.workers.dev/app/p32929/cgpa-calculator).

## Which file to use

1. **`CGPA_Calculator 1.1.c`:** the latest. Prints a table of every subject with its total, then your CGPA.
2. **`CGPA_Calculator 1.0.c`:** the first version.
3. **`CGPA_Calculator E.c`:** the "what if" version. After the table, type a subject's number and the GPA you expect, and it shows your new CGPA. Type `0` to stop. It also saves your subjects to `z.txt`.

## Build and run

You need a C compiler, like `gcc`, `clang` or MinGW.

```bash
gcc "CGPA_Calculator 1.1.c" -o cgpa
./cgpa
```

On a Mac, Apple's `clang` refuses the old `void main()`, so add one flag:

```bash
clang -Wno-return-mismatch "CGPA_Calculator 1.1.c" -o cgpa
```

Then enter how many subjects you have, and for each one its code, credits and GPA. For example, CSE101 with 3 credits and GPA 3.5 plus MAT101 with 3 credits and GPA 4.0 gives:

```
SL	Subject		Credits		GPA		Total
1	CSE101      	3.00		3.50		10.50
2	MAT101      	3.00		4.00		12.00

CGPA = 3.7500
```

Subject codes can be up to 9 characters long.

## License

MIT License — Copyright (c) 2020 Fayaz Bin Salam.

## Contributing

Contributions are very welcome, thank you! Before you start on a pull request, please open an issue and tell me what you would like to add or change. That way we can agree on it first, and your time is not wasted on something that might not fit. Thanks for helping make CGPA Calculator better.

## You might also like

<p><a href="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/0"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/0-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/0-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (1)"></picture></a><a href="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/1"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/1-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/1-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (2)"></picture></a><br><a href="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/2"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/2-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/2-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (3)"></picture></a><a href="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/3"><picture><source media="(prefers-color-scheme: dark)" srcset="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/3-dark.svg"><img src="https://openstore.pfay.workers.dev/more/p32929/cgpa-calculator/3-light.svg" width="50%" align="top" alt="More apps by p32929 on OpenStore (4)"></picture></a></p>

<p><a href="https://p32929.github.io/share/?repo=CGPA_Calculator"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/footer-share-dark.svg"><img src="https://p32929.github.io/readme/footer-share-light.svg" width="50%" align="top" alt="Share this project with your friends in one click"></picture></a><a href="https://p32929.github.io/support/"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/footer-support-dark.svg"><img src="https://p32929.github.io/readme/footer-support-light.svg" width="50%" align="top" alt="If you like my work and want to support me, feel free to support"></picture></a><br><a href="https://openstore.pfay.workers.dev/add"><picture><source media="(prefers-color-scheme: dark)" srcset="https://p32929.github.io/readme/footer-join-dark.svg"><img src="https://p32929.github.io/readme/footer-join-light.svg" width="100%" align="top" alt="Put your own apps on OpenStore: free, your listing lives in your own repo"></picture></a></p>
