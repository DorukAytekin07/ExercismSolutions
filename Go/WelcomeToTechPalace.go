package techpalace

import "strings"

// WelcomeMessage returns a welcome message for the customer.
func WelcomeMessage(customer string) string {
	return "Welcome to the Tech Palace, " + strings.ToUpper(customer)
	panic("Please implement the WelcomeMessage() function")
}

// AddBorder adds a border to a welcome message.
func AddBorder(welcomeMsg string, numStarsPerLine int) string {
	var message string = ""
	for i := 0; i < numStarsPerLine; i++ {
		message += "*"
	}
	message += "\n"
	message += welcomeMsg + "\n"
	for i := 0; i < numStarsPerLine; i++ {
		message += "*"
	}
	return message
	panic("Please implement the AddBorder() function")
}

// CleanupMessage cleans up an old marketing message.
func CleanupMessage(oldMsg string) string {
	oldMsg = strings.ReplaceAll(oldMsg, "*", " ")
	oldMsg = strings.TrimSpace(oldMsg)
	return oldMsg
	panic("Please implement the CleanupMessage() function")
}
