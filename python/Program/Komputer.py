from RAM import RAM
from CPU import CPU
from GPU import GPU
from Storage import Storage


class Komputer:

    def __init__(self, merek = "", model = ""):
        self.__merek = merek
        self.__model = model

        self.__ram = RAM()
        self.__cpu = CPU()
        self.__gpu = GPU()
        self.__storage = Storage()

    def getMerek(self):
        return self.__merek

    def setMerek(self, merek):
        self.__merek = merek

    def getModel(self):
        return self.__model

    def setModel(self, model):
        self.__model = model

    def getRam(self):
        return self.__ram

    def getCpu(self):
        return self.__cpu

    def getGpu(self):
        return self.__gpu

    def getStorage(self):
        return self.__storage