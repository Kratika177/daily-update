class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
  		int l1 = ransomNote.length();

		int l2 = magazine.length();

		if (l1 > l2)
			return false;

		char[] ransomNoteChars = ransomNote.toCharArray();
		for (char charOfransomNote : ransomNoteChars) {
			
			if (magazine.contains(Character.toString(charOfransomNote)))
				magazine = magazine.replaceFirst(Character.toString(charOfransomNote), "");
			else
				return false;
		}
	
		return true;
    }
}
