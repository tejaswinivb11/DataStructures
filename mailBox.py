class mail_Box:
    def __init__(self):
        self.Inbox=[]
    def add_msg(self):
        msg= input("enter the msg to add to the mailbox:")
        self.Inbox.append(msg)
    def remove_msg(self):
        self.play_list.pop()
    def traverse(self):
        if len(self.Inbox) is not None:
            print(self.Inbox[-1])
        else:
            print("no mail exist")

mp = mail_Box()
print("""enter "add" to add the msg to the inbox,
enter "remove" to remove the msg from the inbox,
enter "view" to view the msg form the mailbox """)
while True:
    command = input ("enter what to do?")
    if command == "add":
        mp.add_msg()
    elif command == "remove":
        mp.remove_msg()
    elif command == "view":
        mp.traverse()
    else:
        print("invalid input")

