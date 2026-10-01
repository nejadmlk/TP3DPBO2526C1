class RAM:

    def __init__(self, kapasitas = "", tipe = ""):
        self.__kapasitas = kapasitas
        self.__tipe = tipe

    def getKapasitas(self):
        return self.__kapasitas

    def getTipe(self):
        return self.__tipe

    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def setTipe(self, tipe):
        self.__tipe = tipe