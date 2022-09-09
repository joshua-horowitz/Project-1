## Project 1 Report
When I attempted to merge the branches, I was met with this error message:

<img width="590" alt="first_screenshot" src="https://user-images.githubusercontent.com/112425813/189334390-8e49a176-7a0d-4074-9862-9e074a999528.png">

At first, I was perplexed. How could I solve this new problem? I did some digging through the [link that you referenced in the project description](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging) and I figured that a good first course of action would be to run “git status” for further clarification. This yielded the following explanation:
 
<img width="500" alt="second_screenshot" src="https://user-images.githubusercontent.com/112425813/189334605-98dace8e-4073-44b3-9bbe-d22855b3fd1b.png">

It seemed that I needed to choose which changes that I would want in the main branch after merging and update my branches independently in order to avoid a merge conflict when attempting merge in the future. I re-opened project0.cc in Atom to get started and I saw this:

<img width="1388" alt="third_screenshot" src="https://user-images.githubusercontent.com/112425813/189334644-9afa54cd-c098-43e1-93bd-947fff5e21ee.png">

From the aforementioned website, I knew that I had three options: to choose the content from the main branch, to use the content from the new branch, or to merge the content myself. I chose the last option and I ultimately re-wrote the comment and successfully committed and pushed the result to the git repository where the new branch was merged into the main branch.
