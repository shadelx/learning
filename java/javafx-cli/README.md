##this is a simple javafx program run from terminal

1.	add lib as a enviorment variable
		export PATH_TO_FX=path/to/javafx-sdk-17/lib
2.	compile program
		javac --module-path $PATH_TO_FX --add-modules javafx.controls HelloFX.java
3.	if you use fxml you need to add javafx.fxml as module
		javac --module-path $PATH_TO_FX --add-modules javafx.controls,javafx.fxml HelloFX.java
4.	run the application
		java --module-path $PATH_TO_FX --add-modules javafx.controls HelloFX
