#include <iostream>

enum class Message{
    information,
    warning,
    error,
    fatal
};

void writeMessage() { std::cerr << "message" << '\n'; }
void writeWarning() { std::cerr << "warning" << '\n'; }
void writeUnexpected() { std::cerr << "unexpected" << '\n'; }

void withDefault(Message message) {
    switch(message) {
        case Message::information:
            writeMessage();
            break;
        case Message:: warning:
            writeWarning();
            break;
       default:
            writeUnexpected();
            break;
    }
}

void withoutDefaultGood(Message message) {
    switch(message) {
        case Message::information:
            writeMessage();
            break;
        case Message:: warning:
            writeWarning();
            break;
        default:
            // nothing can be done
            break;
    }
}

void withoutDefaultBad(Message message) {
    switch(message) {
        case Message::information:
            writeMessage();
            break;
        case Message::warning:
            writeWarning();
            break;
    }
}

int main() {
  
    withDefault(Message::fatal);
    withoutDefaultGood(Message::information);
    withoutDefaultBad(Message::warning);

}
