# Touch
Like the `touch` app in linux. I want to build one for windows with c.

---
**Question 1**: What will it do?  
Make new File.  

**Question 1.1**: How to create a new file?

---
**Question 2**: What would be the file name?  
That is passed when the app is invoked.  

---
**Question 2.1**: What if no file name is passed?  
We will ask the user to give a name.

---
**Question 3**: What if the file already exists?  
We will not do anything with the existing file and exit.  

---
**Question 4**: Where will the file be created?  
In the current directory for now.

---
**Question 4.1**: How would we create the file in other directory without leaving the current directory?  
We will see that later.

---
## Usage  
```sh
touch test.txt
```

Multiple files can be created at once  
```sh
touch test.txt test.c main.py
```
