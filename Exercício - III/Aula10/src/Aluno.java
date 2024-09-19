public class Aluno extends Pessoa{
    private String matricula;
    private String curso;

    public Aluno(String nome, int idade, String cpf, String matricula, String curso) {
        super(nome, idade, cpf);
        this.matricula = matricula;
        this.curso = curso;
    }

    public String exibirDados(){
        return String.format("nome:%s\n idade:%s cpf:%s\n matricula:%s\n curso:%s\n", nome, idade, cpf, matricula, curso);

    }

    public void realizarMatricula(String matricula, String curso){
        this.matricula = matricula;
        this.curso = curso;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }
}
