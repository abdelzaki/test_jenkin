pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main',

                    url: 'https://github.com/abdelzaki/test_jenkin.git'
            }}
        stage('Build') {
            steps {
                sh '''
                ls -la
                mkdir -p build
                cd build
                cmake ..
                cmake --build .
                '''
            }
        }
    //     stage('Test') {
    //         steps {
    //             sh './gradlew check'
    //         }
    //     }
    // }

    // post {
    //     always {
    //         archiveArtifacts artifacts: 'build/libs/**/*.jar', fingerprint: true
    //         junit 'build/reports/**/*.xml'
    //     }
    }
    }
