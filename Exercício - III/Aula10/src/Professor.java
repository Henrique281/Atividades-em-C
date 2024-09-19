public class Professor extends Pessoa {
    private String salario;
    private String disciplina;
    private String quantidadeAulaDada;


    public Professor(String nome, int idade, String cpf, String salario, String disciplina, String quantidadeAulaDada) {
        super(nome, idade, cpf);
        this.salario = salario;
        this.disciplina =disciplina;
        this.quantidadeAulaDada = quantidadeAulaDada;
    }

    public String exibirDados(){
        return String.format("nome:%s\n idade:%s cpf:%s\n salario:%s\n disciplina:%s\n quatidade de aula dada:%s\n ", nome, idade, cpf, salario, disciplina, quantidadeAulaDada);

    }

    public void darAula(String quantidadeAulaDada){
        this.quantidadeAulaDada = quantidadeAulaDada;
    }

    public String getSalario() {
        return salario;
    }

    public void setSalario(String salario) {
        this.salario = salario;
    }

    public String getDisciplina() {
        return disciplina;
    }

    public void setDisciplina(String disciplina) {
        this.disciplina = disciplina;
    }

    public String getQuantidadeAulaDada() {
        return quantidadeAulaDada;
    }

    public void setQuantidadeAulaDada(String quantidadeAulaDada) {
        this.quantidadeAulaDada = quantidadeAulaDada;
    }
}

