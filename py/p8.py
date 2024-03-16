#Python program to create a doubly linked list and print nodes from beginning

 class Node(object):
    def _init_(self, data=None, next=None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev
	
class doubly_linked_list(object):
    def _init_(self):
        self.head = None
        self.tail = None
        self.count = 0

    def append_item(self, data):
        new_item = Node(data, None, None)
        if self.head is None:
            self.head = new_item
            self.tail = self.head
        else:
            new_item.prev = self.tail
            self.tail.next = new_item
            self.tail = new_item

        self.count += 1

    def print_foward(self):
        for item in self.iter():
            print(item)
            
    def iter(self):
        current = self.head
        while current:
            item_val = current.data
            current = current.next
            yield item_val

items = doubly_linked_list()
items.append_item('C#')
items.append_item('C++')
items.append_item('PHP')
items.append_item('Java')
items.append_item('Python')

print("Print Items in the Doubly linked:")
items.print_foward()
