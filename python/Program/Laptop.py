from Komputer import Komputer


class Laptop(Komputer):

    def __init__(self, merek = "", model = "", layar = "", baterai = ""):
        super().__init__(merek, model)

        self.__layar = layar
        self.__baterai = baterai

    def getLayar(self):
        return self.__layar

    def getBaterai(self):
        return self.__baterai

    def setLayar(self, layar):
        self.__layar = layar

    def setBaterai(self, baterai):
        self.__baterai = baterai