using System;
using System.Text;

namespace CaesarsCipher
{
	class Program
	{
		public static StringBuilder caesarDecipher(StringBuilder cipheredText, int shift)
		{	
			if(shift > 26)
				shift = ((shift % 26) + 26) % 26;
			
			StringBuilder plainText = new StringBuilder();
			
			for(int i = 0; i < cipheredText.Length; i++)
			{
				if(char.IsUpper(cipheredText[i]))
				{
					char ch = (char)(((((cipheredText[i] - shift) - 65) % 26) + 26) % 26 + 65); 
					plainText.Append(ch);
				}
				else if(char.IsLower(cipheredText[i]))
				{
					char ch = (char)(((((cipheredText[i] - shift) - 97) % 26) + 26) % 26 + 97); 
                			plainText.Append(ch); 
				}
				else
				{
					char ch = (char)((int)cipheredText[i] - shift);
					plainText.Append(ch);
				}
			}
			return plainText; 

		}

		public static StringBuilder caesarCipher(StringBuilder plainText, int shift)
		{
			if(shift > 26)
				shift = ((shift % 26) + 26) % 26;

			StringBuilder cipheredText = new StringBuilder();
			
			for(int i = 0; i < plainText.Length; i++)
			{
				if(char.IsUpper(plainText[i]))
				{
					char ch = (char)(((((plainText[i] + shift) - 65) % 26) + 26) % 26 + 65);
					cipheredText.Append(ch);
				}
				else if(char.IsLower(plainText[i]))
				{
					char ch = (char)(((((plainText[i] + shift) - 97) % 26) + 26) % 26 + 97);
                			cipheredText.Append(ch); 
				}
				else
				{
					char ch = (char)((int)plainText[i] + shift);
					cipheredText.Append(ch);
				}
			}
			return cipheredText; 
		}

		public static void Main(string[] args)
		{
			StringBuilder plainText = new StringBuilder("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
			
			StringBuilder cipheredText = caesarCipher(plainText, 3);
			Console.WriteLine(cipheredText);
			plainText = caesarDecipher(cipheredText, 3);
			Console.WriteLine(plainText);
		
			cipheredText = caesarCipher(plainText, -114);
			Console.WriteLine(cipheredText);
			plainText = caesarDecipher(cipheredText, -114);
			Console.WriteLine(plainText);
		

		}
	}
}

