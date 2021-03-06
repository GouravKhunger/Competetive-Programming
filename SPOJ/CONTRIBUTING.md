This file includes the conventions you should follow while
submitting a Pull Request to this repository.

# Contribution Guidelines

## Prerequisites
Be sure that your solutions is working and accepted in the official
[SPOJ](https://spoj.com) website. While submitting a Pull Request,
providing a screenshot of the Accepted tag from SPOJ will boost the
merging process.

## File Location
All solutions are present in the [Solutions Folder](https://github.com/GouravKhunger/SPOJ/blob/main/Solutions/).

## File Naming Conventions
The name of the file must be the problem name as seen on the URL of the problem.
For example, the problem at: https://www.spoj.com/problems/TEST/ will have the name
`TEST.cpp`(if written in C++, extensions vary).

__**Be sure that you follow the naming convention as mentioned.**__

## Multiple Solutions for a single problem
Multiple solutions, which implement different algorithms to solve the problem, are welcomed.
The naming convention of the solution file is almost the same as mentioned above.
The only change required is to add `-Solution<number>` at the end of the name.

But, if the previous solution is in another programming language than yours, you
need not to add `-Solution<number>` at the end, just keep the same name as the previous one
and check that the extension should be different.

On the other hand, if the solution already exists and your solution is also in the same language as yours then follow the below process:

First, check the repository if a previous solution to the same problem exists of not, if it exists,
then rename that file to `<previous-name>-Solution1` and rename your file to `<previous-name>-Solution2`
and add a Pull Request.

Sorry for any inconvenience caused.

## Comments
To keep records of the files, I request you to add comments in the begining of your solution.
These 4 lines of comments are necessary:

    <link-to-problem>
    <name-of-problem>
    <file-creation-date>
    <author-and-github-link>

For example(this example is from [this file](https://github.com/GouravKhunger/SPOJ/blob/main/Solutions/TEST.cpp)):

    // https://www.spoj.com/problems/TEST/
    // TEST - Life, the Universe, and Everything
    // File Creation Date: 22-Oct-2020
    // Author: Gourav(https://github.com/GouravKhunger)

For better understanding, please look into other files existing in the repository.

## Final Words
I thank you all who have contributed to this repository. I hope that this repository
will be beneficial to all who need help in the problems. But please use this repository
wisely.
