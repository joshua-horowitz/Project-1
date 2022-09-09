## Project 1 Report
When I attempted to merge the branches, I was met with this error message:
At first, I was perplexed. How could I solve this new problem? I did some digging through the link that you referenced in the project description (https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging) and I figured that a good first course of action would be to run “git status” for further clarification. This yielded the following explanation:
 









It seemed that I needed to choose which changes that I would want in the main branch after merging and update my branches independently in order to avoid a merge conflict when attempting merge in the future. I re-opened project0.cc in Atom to get started and I saw this:







From the aforementioned website, I knew that I had three options: to choose the content from the main branch, to use the content from the new branch, or to merge the content myself. I chose the last option and I ultimately re-wrote the comment and successfully committed and pushed the result to the git repository where the new branch was merged into the main branch.
