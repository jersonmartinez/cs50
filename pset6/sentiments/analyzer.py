import nltk

class Analyzer():

    def __init__(self, positivas, negativas):
        self.positivas_set = set()
        archivo = open(positivas, "r")

        for linea in archivo:
            if linea.startswith(";") == False:
                self.positivas_set.add(linea.rstrip("\n"))
        archivo.close()

        self.negativas_set = set()
        archivo = open(negativas, "r")

        for linea in archivo:
            if linea.startswith(";") == False:
                self.negativas_set.add(linea.rstrip("\n"))
        archivo.close()

    def analyze(self, texto):
        ticket = nltk.tokenize.TweetTokenizer()
        tokens = ticket.tokenize(text)

        sum = 0

        for palabra in tokens:
            if palabra.lower() in self.positivas_set:
                sum += 1
            elif palabra.lower() in self.negativas_set:
                sum -= 1
            else:
                continue

        return sum