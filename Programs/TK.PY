from tkinter import *
root=Tk()
# label=Label(root,text="this is text", bg="red")
# label.pack()
frame=Frame(root,width=300,height=300)
button1=Button(frame,text="Button1",bg="blue")
button1.pack(side=LEFT,fill=X)
frame.pack()
root.mainloop()