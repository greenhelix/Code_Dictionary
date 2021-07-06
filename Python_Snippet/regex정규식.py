import re

result = re.split('<[^<>]*>',
                  '<html> Wow <head> header </head> <body> Hey </body> </html>')
# ['', ' Wow ', ' header ', ' ', ' Hey ', ' ', '']
result = list(map(lambda x: x.strip(), result))
result = list(filter(lambda x: x != '', result))

# print(result)
# print(''.join(result).split())
