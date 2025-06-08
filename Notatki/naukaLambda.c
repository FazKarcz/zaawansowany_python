# Zadanie 1 (sortowanie wg różnicy od 10, metoda sorted i funkcja anonimowa)

data = [15, 7, 22, 10, 3]
sorted_data = sorted(data, key=lambda x: abs(x - 10))
print(sorted_data)


# Zadanie 2 (filtrowanie liczb ujemnych, metoda filter i funkcja anonimowa)

data = [3, -1, 0, -7, 8, -4]
negative_numbers = list(filter(lambda x: x < 0, data))
print(negative_numbers)


# Zadanie 3 (tworzenie nowej listy z wartościami podniesionymi do kwadratu, metoda map i funkcja anonimow

data = [2, -3, 4, -1]
squared = list(map(lambda x: x**2, data))
print(squared)


# Zadanie 4 (sortowanie listy napisów wg długości, metoda sorted i funkcja anonimowa)

data = ["kot", "słonik", "pies", "żółw"]
sorted_by_length = sorted(data, key=lambda x: len(x))
print(sorted_by_length)

