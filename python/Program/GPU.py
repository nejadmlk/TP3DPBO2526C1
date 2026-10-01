class GPU:

    def __init__(self, merek = "", model = "", vram = ""):
        self.__merek = merek
        self.__model = model
        self.__vram = vram

    def getMerek(self):
        return self.__merek

    def getModel(self):
        return self.__model

    def getVram(self):
        return self.__vram

    def setMerek(self, merek):
        self.__merek = merek

    def setModel(self, model):
        self.__model = model

    def setVram(self, vram):
        self.__vram = vram