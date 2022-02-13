bool isValid(char * s){
        int counter = 0;
        for (int i = 0; s[i]!='\0'; i++) {  // sonuna kadar git.
            if (s[i] == ')' || s[i] == '}' || s[i] == ']') {   
                if (counter == 0) return false; // !! Kapali parantezden once acik yoksa patlar.
                else {
                    for (int j = i - 1; 0 <= j; j--) {	// Kapali parantezden onceki ilk acigi bul.
                        if (s[j] == '(') {
                            if (s[i] != ')') return false;   // Eslesmediyse false.
                            s[j] = '0';  // Eslestiyse acik parantezi 0'a cevir ve donguden cik.
                            break;
                        }
                        else if (s[j] == '{') {
                            if (s[i] != '}') return false;
                            s[j] = '0';
                            break;
                        }
                        else if (s[j] == '[') {
                            if (s[i] != ']') return false;
                            s[j] = '0';
                            break;
                        }
                    }
                }
                counter--;
            }
            else ++counter; // !!! Acik parantezleri say.
        }
        if (counter != 0) return false; // !! Kapanmamis, acik parantezler kalmissa patlar.
        return true;
}
