print("CDV")
print(10)
'''
Komentarz
Blokowy
'''
#Potekowanie
potega=2 ** 10
print(potega)

#pobieranie danych z klawiatury
name=input()
#konkatenacja
print("Twoje imie: " +name)
surname=input()
print("Twoje imie: " +name+ ", nazwisko: " +surname)

'''
Uzytkownik podaje dane z klawiatury, swoj wiek,
Wyswietl dane w formacie: Twoj wiek:...lat
'''

print("Podaj swoj wiek: ",end="")
age=input()
print(type(age))
print("Twoj wiek: ",age," lata")
age=20
print(type(age))

surname="Kowalski"
firstLetter=surname[0]
print(firstLetter)

length=len(surname)
print(length)

lastLetter=surname(len(surname)-1)
print(lastLetter)

lastLetter=surname(-1)
print(lastLetter)
