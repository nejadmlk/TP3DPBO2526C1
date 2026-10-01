class CPU:

    def __init__(self, merek = "", model = "", kecepatan = ""):
        self.__merek = merek
        self.__model = model
        self.__kecepatan = kecepatan

    def getMerek(self):
        return self.__merek

    def getModel(self):
        return self.__model

    def getKecepatan(self):
        return self.__kecepatan

    def setMerek(self, merek):
        self.__merek = merek

    def setModel(self, model):
        self.__model = model

    def setKecepatan(self, kecepatan):
        self.__kecepatan = kecepatan