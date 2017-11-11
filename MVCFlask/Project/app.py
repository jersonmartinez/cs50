from flask import Flask, redirect, render_template, request, session, url_for
# from datetime import datetime
# from pytz import timezone

app = Flask(__name__)

@app.route("/")

def index():
    return render_template("index.html")

@app.route("/register", methods=["POST"])

def register():
    if request.form["name"] == "" or request.form["dorm"] == "":
        return render_template("failure.html")
    return render_template("success.html")

# def time():
#     now = datetime.now(timezone("America/New_York"))
#     return "The current date and time is {}".format(now)

# @app.route("/show/<number>")
# def show(number):
#     return "You passed in {}".format(number)
