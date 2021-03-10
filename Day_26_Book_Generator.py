def generateBook(characters, book):
    
	for character in book:
		docFreq=countCharacterFrequency(character,book)
		charFreq=countCharacterFrequency(character,characters)
		if docFreq > charFreq:
			return False
    return True

def countCharacterFrequency(character, goal):
	frequency =0
	for char in goal:
		if char == character:
			frequency+=1
	
	return frequency
		
