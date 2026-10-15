import subprocess

profiles = subprocess.check_output ("netsh wlan show profiles",

shell=True).decode()

\"{wifi}\"

key=clear",

names = [line.split(":") [1].strip()

for line in profiles.split("\n") if "All User Profile" in line]

for i, n in enumerate(names, 1): print(f"[{i}] {n}")

ch = int(input("\nChoose WiFi number: "))

wifi = names [ch - 1]

result = subprocess.check_output(

f"netsh wlan show profile

shell=True).decode()

print("\n"

+ result)