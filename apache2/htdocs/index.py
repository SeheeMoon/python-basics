#!/Users/seheemoon/opt/anaconda3/bin/python3
print("content-type:text/html")
print()
import cgi, os
form = cgi.FieldStorage()

files = os.listdir('data')
listStr = ''
for item in files:
    listStr = listStr + '<li><a href="index.py?id={name}">{name}</a></li>'.format(name=item)


if 'id' in form:
    pageId = form["id"].value
    description = open('data/'+pageId, 'r').read()
else:
    pageId = 'Welcome'
    description = "The Premier League, often referred to as the <strong><u>English Premier League</u> or the EPL</strong> (legal name: The Football Association Premier League Limited), is the top level of the English football league system. Contested by 20 clubs, it operates on a system of promotion and relegation with the English Football League (EFL). Seasons run from August to May with each team playing 38 matches (playing all 19 other teams both home and away). Most games are played on Saturday and Sunday afternoons. The competition was founded as the FA Premier League on 20 February 1992 following the decision of clubs in the Football League First Division to break away from the Football League, founded in 1888, and take advantage of a lucrative television rights sale to Sky. From 2019-20, the leagues accumulated television rights deals were worth around £3.1 billion a year, with Sky and BT Group securing the domestic rights to broadcast 128 and 32 games respectively. The Premier League is a corporation where chief executive Richard Masters is responsible for its management, whilst the member clubs act as shareholders. Clubs were apportioned central payment revenues of 2.4 billion in 2016~17, with a further 343 million in solidarity payments to English Football League (EFL) clubs."


print('''<!doctype html>
<html>
<head>
	<title>WEB1 - EPL</title>
	<meta chrset="utf-8">
	<link rel="stylesheet" href="style.css" type="text/css">
</head>
<body>
	<h1><a href="index.py">EPL</a></h1>
	<div id="grid">
		<ol>
            {listStr}
		</ol>
		<div id="article">
			<h2>{title}
			</h2>
            <p>{desc}</p>
		</div>
	</div>
</body>
</html>
'''.format(title=pageId, desc=description, listStr=listStr))