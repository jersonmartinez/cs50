from flask import Flask, redirect, render_template, request, session, url_for
# from datetime import datetime
# from pytz import timezone

app = Flask(__name__)
app.secret_key = "shhh"

def index():
    return render_template("index.html")

@app.route("/", methods=["GET", "POST"])

def store():
    if request.method == "POST":
        for item in ["foo", "bar", "baz"]:
            if item not in session:
                session[item] = int(request.form[item])
            else:
                session[item] += int(request.form[item])
        return redirect(url_for("cart"))
    return render_template("index.html")

@app.route("/cart")
def cart():
    cart = []
    for item in ["foo", "bar", "baz"]:
        cart.append({"name": item.capitalize(), "quantity": session[item]})
    return render_template("cart.html", cart=cart)

# def time():
#     now = datetime.now(timezone("America/New_York"))
#     return "The current date and time is {}".format(now)

# @app.route("/show/<number>")
# def show(number):
#     return "You passed in {}".format(number)
