# Contact Management System

A contact structure that contains other structures representing the contact Name, Address, and phone Numbers. Emphasize modularization by highly cohesive and tightly coupled tasks into modules (*.h and *.c files). This strategy will reduce redundant coding throughout all parts of the application.

## 1. Environment Configuration

1. Git download: please refer to the [git](https://git-scm.com/) documentation.

2. Download and run the latest Visual Studio to write c files there.


## 2. Add an existing project to GitHub

1. Initialize the local directory as a Git repository:

        git init

2. Add and stage the files in the local repo:

        git add .

3. Give a commit message:

        git commit -m "Topic"
        git commit --amend

4. Sets the new remote:

        git remote add origin remote-repository-URL
        git remote -v

5. Push to remote repo in GitHub:

        git push origin master

## 3. Add files to remote repo

1. Repeat steps 2, 3 from section 3.

2. Push to "develop" branch in the remote from local "some-branch" branch:

        git push origin some-branch:develop

3. Alternative way -- merge from local branch first:

        git checkout develop
        git merge some-branch
        git push origin develop

        Either way will commit to develop branch in the remote repository, and you can merge to master branch later with a second check.
