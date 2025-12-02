namespace C {
    public class Ventana {
        private void Main() {
            console.write("Hello World");
            Calculadora calc = new Calculadora();
            int resultado = calc.Sumar(5, 10);
            console.write("Resultado: " + resultado);
        }
    }
}