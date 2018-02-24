import nltk

class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        """Initialize Analyzer."""

        # Ya los tenía elaborado en otro script, ahora mismo sólo los pegaré acá.
        self.positivas_set = set()
        archivo = open(positives, "r")

        for linea in archivo:
            if linea.startswith(";") == False:
                self.positivas_set.add(linea.rstrip("\n"))
        archivo.close()

        self.negativas_set = set()
        archivo = open(negatives, "r")

        for linea in archivo:
            if linea.startswith(";") == False:
                self.negativas_set.add(linea.rstrip("\n"))
        archivo.close()

    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""

        # TODO
        # Lo mismo con este método, ya lo tenía elaborado.

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