int&& returnRvalueReference() {
    return int{};
}

int main(){

    auto myInt = returnRvalueReference();

}
