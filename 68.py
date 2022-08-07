# File Handling

#creating a file
s="this is my file"
file=open("demo.txt","w")
file.write(s)
print("file created")
file.close()

#file read
file=open("demo.txt","r")
filecontent=file.read()
print(filecontent)
file.close()

#write a list into file
l1=["Python","Java"]
file=open("demo2.txt","w")
file.writelines(l1)
print("File Created")
file.close()

#read a list from file
file=open("demo2.txt","r")
filelist=file.readlines()
print(filelist)
file.close()

#append the value into file
w="Ptyhon file handling"
file=open("demo.txt","a")
file.writelines(w)
print("file updated")
file.close()

#raw binary data(rb)
f=open("demo.txt","rb")
content=f.read()
content
f.close()

#writing to binary file(wb)
f=open("demo.txt","wb")
num=[5,10,20]
arr=bytearray(num)
f.write(arr)
f.close()