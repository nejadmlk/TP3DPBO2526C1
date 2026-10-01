from Komputer import Komputer

class Desktop(Komputer):


    def __init__(self, merek = "", model = "", casing = "", psu = ""):
        super().__init__(merek, model)

        self.__casing = casing
        self.__psu = psu

    def getCasing(self):
        return self.__casing

    def getPsu(self):
        return self.__psu

    def setCasing(self, casing):
        self.__casing = casing

    def setPsu(self, psu):
        self.__psu = psu

