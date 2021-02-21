class Hotel():
    static = 0

    def __init__(self, name, visitor, number):
        self.name = name
        self.visitor = visitor
        self.number = number

    def __str__(self):
        return f"name:{self.name} visitor:{self.visitor} number:{self.number}"

    def __del__(self):
        print("викликаэмо деструктор")

    @staticmethod
    def staticmethod(static):
        return f"static={static}"


Lisha=Hotel("Lisha",10,10)
print(Lisha)


