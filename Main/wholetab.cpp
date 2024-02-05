#include "wholetab.h"
#include "ui_wholetab.h"

WholeTab::WholeTab(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WholeTab)
{
    ui->setupUi(this);

    // // DB Connect
    // DB_Connection = QSqlDatabase::addDatabase("QSQLITE"); // DB추가
    // DB_Connection.setDatabaseName(QCoreApplication::applicationDirPath() + "/DB_Car.db" ); // DB추가
    // if (DB_Connection.open()) // DB가 연결됐을때 출력문구
    // {
    //     qDebug() << "Database Is Connected";
    // }
    // else // DB가 연결 안됐을때 출력문구
    // {
    //     qDebug() << "Database Is Not Connected";
    //     qDebug() << "Error : " << DB_Connection.lastError();
    // }
}

WholeTab::~WholeTab()
{
    delete ui;
}




////////////////////////////////////////////// 월선택 조회 버튼 ///////////////////////////////////////////////////
////  브랜드 top 5
////  국산차





void WholeTab::on_Select_Ask_PushButton_clicked() // pushbutton click시 이벤트발생
{
    DB_Connection.open(); // DB연결, 열기
    QSqlDatabase::database().transaction(); // 데이터베이스에 접근하여 작업하기 위한 함수x

    QSqlQuery QueryLoadData(DB_Connection); // DB와 연결하여 sqlite로 데이터 가져오기

    if(ui->Select_Month_ComboBox->currentText() == "1") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_11\") AS sale ,ROUND((total(\"2023_11\")/(SELECT SUM(\"2023_11\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_11\") DESC LIMIT 5;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_12\") AS sale ,ROUND((total(\"2023_12\")/(SELECT SUM(\"2023_12\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_12\") DESC LIMIT 5;");
    }



    // int NumberOFRowsToDisplay = 5; // 행의개수


    if (QueryLoadData.exec()) // 실행
    {
        int NumberOFRowsToDisplay = 5; // 행의개수

        ui->Brand_Car_Korea->setRowCount(NumberOFRowsToDisplay); // Brand_Car_Korea의 행의 개수
        int RowNumber = 0; // 데이터 행넘버초기화, 0부터시작


        while (QueryLoadData.next()) // 데이터반복
        {
            // ui->Brand_Car_Korea->insertRow(RowNumber); // Row 행번호 표시

            ui->Brand_Car_Korea->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Brand_Car_Korea->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));
            ui->Brand_Car_Korea->setItem(RowNumber, 2, new QTableWidgetItem(QString::number(QueryLoadData.value("percent").toDouble(),'f',2)));
            RowNumber = RowNumber + 1; // 넘버 1씩 증가
        }
    }


    ///// 수입차 TOP5 //////////////////////////////////////////////////////////////////
    ///
    ///
    ///
    ///
    ///
    ///
    ///

    if(ui->Select_Month_ComboBox->currentText() == "1") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 2월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 3월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 4월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 5월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 6월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 7월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 8월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 9월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 10월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 11월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_11\") AS sale ,ROUND((total(\"2023_11\")/(SELECT SUM(\"2023_11\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }
    else if(ui->Select_Month_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 12월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_12\") AS sale ,ROUND((total(\"2023_12\")/(SELECT SUM(\"2023_12\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;"); // SELECT 컬럼명, 연산자(컬럼) AS 변수 FROM 테이블명 JOIN 2번째테이블명 ON 2테이블컬럼명과 비교할 컬럼명 GROUP BY 정리할목록컬럼명 LIMIT 최대행개수
    }



    if (QueryLoadData.exec()) // 실행
    {
        int NumberOFRowsToDisplay = 5; // 행의개수

        ui->Brand_Car_Foreign->setRowCount(NumberOFRowsToDisplay); // Brand_Car_Korea의 행의 개수
        int RowNumber = 0; // 데이터 행넘버초기화, 0부터시작


        while (QueryLoadData.next()) // 데이터반복
        {
            // ui->Brand_Car_Korea->insertRow(RowNumber); // Row 행번호 표시

            ui->Brand_Car_Foreign->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Brand_Car_Foreign->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));
            ui->Brand_Car_Foreign->setItem(RowNumber, 2, new QTableWidgetItem(QString::number(QueryLoadData.value("percent").toDouble(),'f',2)));
            RowNumber = RowNumber + 1; // 넘버 1씩 증가
        }
    }

    ///////////////////////////////////////////////////////////////TOP10
    /// 국산
    if(ui->Select_Month_ComboBox->currentText() == "1") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_1\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_1\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_2\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_2\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_3\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_3\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_4\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_4\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_5\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_5\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_6\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_6\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_7\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_7\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_8\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_8\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_9\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_9\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_10\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_10\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_11\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_11\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_12\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_12\" desc LIMIT 10;");
    }

    if (QueryLoadData.exec()) // 실행
    {
        int NumberOFRowsToDisplay = 10; // 행의개수

        ui->Model_Car_Korea->setRowCount(NumberOFRowsToDisplay); // Brand_Car_Korea의 행의 개수

        int RowNumber = 0; // 데이터 행넘버초기화, 0부터시작


        while (QueryLoadData.next()) // 데이터반복
        {
            ui->Model_Car_Korea->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Model_Car_Korea->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));

            RowNumber = RowNumber + 1; // 넘버 1씩 증가
        }
    }

    //////////////////////////////////////////////////// 수입산 ////////////

    if(ui->Select_Month_ComboBox->currentText() == "1") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_1\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_1\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_2\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_2\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_3\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_3\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_4\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_4\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_5\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_5\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_6\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_6\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_7\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_7\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_8\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_8\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_9\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_9\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_10\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_10\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL AS company, \"2023_11\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_11\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT MODEL  AS company, \"2023_12\" AS sale FROM CAR_TB WHERE BRAND BETWEEN 7 and 11 GROUP BY MODEL order by \"2023_12\" desc LIMIT 10;");
    }

    if (QueryLoadData.exec()) // 실행
    {
        int NumberOFRowsToDisplay = 10; // 행의개수

        ui->Model_Car_Foreign->setRowCount(NumberOFRowsToDisplay); // Brand_Car_Korea의 행의 개수

        int RowNumber = 0; // 데이터 행넘버초기화, 0부터시작


        while (QueryLoadData.next()) // 데이터반복
        {
            ui->Model_Car_Foreign->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Model_Car_Foreign->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));

            RowNumber = RowNumber + 1; // 넘버 1씩 증가
        }
    }



    QSqlDatabase::database().commit(); // 해당 작업의 사항을 보여주는 함수
    DB_Connection.close(); // DB 열었으니 닫음
}





////////////////////////////////////////////// 월선택 조회 버튼 끝///////////////////////////////////////////////////





////////////////////////////////////////////// 기간 조회 버튼 ///////////////////////////////////////////////////



// void Widget::on_Session_Ask_PushButton_clicked()
// {
//     DB_Connection.open();
//     QSqlDatabase::database().transaction();
//     QSqlQuery QueryLoadData(DB_Connection);

//     // 선택한 시작월과 끝월의 숫자 값을 가져옴
//     int startMonth = ui->Session_Month_First_ComboBox->currentIndex() + 1;
//     int endMonth = ui->Session_Month_Last_ComboBox->currentIndex() + 1;

//     QString startColumn = QString("2023_%1").arg(startMonth);
//     QString endColumn = QString("2023_%1").arg(endMonth);

//     QString query = QString("SELECT BRAND AS company, sum(\"%1\") AS sale, "
//                             "ROUND((total(\"%1\") / (SELECT SUM(\"%1\") FROM CAR_TB WHERE BRAND < 7)) * 100, 0) as percent "
//                             "FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 "
//                             "AND (\"%1\" BETWEEN %2 AND %3) "
//                             "GROUP BY BRAND ORDER BY SUM(\"%1\") DESC LIMIT 5;")
//                         .arg(startColumn)
//                         .arg(startColumn)
//                         .arg(endColumn);

//     QueryLoadData.prepare(query);

//     if (QueryLoadData.exec())
//     {
//         int NumberOFRowsToDisplay = 5;
//         ui->Brand_Car_Korea->setRowCount(NumberOFRowsToDisplay);
//         int RowNumber = 0;

//         while (QueryLoadData.next())
//         {
//             ui->Brand_Car_Korea->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
//             ui->Brand_Car_Korea->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));
//             ui->Brand_Car_Korea->setItem(RowNumber, 2, new QTableWidgetItem(QString::number(QueryLoadData.value("percent").toDouble(), 'f', 2)));
//             RowNumber++;
//         }
//     }

//     QSqlDatabase::database().commit();
//     DB_Connection.close();
// }

void WholeTab::on_Session_Ask_PushButton_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryLoadData(DB_Connection);


    ////////////1월 //////////////// 국산 TOP 5

    if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "1") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\" + \"2023_2\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }


    /////////////2월 //////////////////




    if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }


    ///////////////3월/////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "3")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }

    /////////////////4월 //////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }



    /////////////////5월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }


    /////////////////6월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }



    /////////////////7월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }


    /////////////////8월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }

    /////////////////9월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }

    /////////////////10월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }


    /////////////////11월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "11" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_11\") AS sale ,ROUND((total(\"2023_11\")/(SELECT SUM(\"2023_11\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_11\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "11" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_11\")/(SELECT SUM(\"2023_11\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_11\") DESC LIMIT 5;");
    }


    /////////////////12월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "12" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_12\") AS sale ,ROUND((total(\"2023_12\")/(SELECT SUM(\"2023_12\") FROM CAR_TB WHERE BRAND < 7))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 1 AND 6 GROUP BY BRAND ORDER BY SUM(\"2023_12\") DESC LIMIT 5;");
    }





    if (QueryLoadData.exec())
    {
        int NumberOFRowsToDisplay = 5;
        ui->Brand_Car_Korea->setRowCount(NumberOFRowsToDisplay);
        int RowNumber = 0;

        while (QueryLoadData.next())
        {
            ui->Brand_Car_Korea->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Brand_Car_Korea->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));
            ui->Brand_Car_Korea->setItem(RowNumber, 2, new QTableWidgetItem(QString::number(QueryLoadData.value("percent").toDouble(), 'f', 2)));
            RowNumber++;
        }
    }


    ////////////1월 ////////////////수입

    if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "1") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\" + \"2023_2\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_1\"+ \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_1\")/(SELECT SUM(\"2023_1\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_1\") DESC LIMIT 5;");
    }


    /////////////2월 //////////////////




    if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "2") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "3") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "4") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "5") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "6") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "7") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "8") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "9") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "10") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "11") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "12") // Select_Month_ComboBox가 해당월을 출력함 1월
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_2\")/(SELECT SUM(\"2023_2\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_2\") DESC LIMIT 5;");
    }


    ///////////////3월/////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "3")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_3\")/(SELECT SUM(\"2023_3\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_3\") DESC LIMIT 5;");
    }

    /////////////////4월 //////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_4\")/(SELECT SUM(\"2023_4\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_4\") DESC LIMIT 5;");
    }



    /////////////////5월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_5\")/(SELECT SUM(\"2023_5\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_5\") DESC LIMIT 5;");
    }


    /////////////////6월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_6\")/(SELECT SUM(\"2023_6\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_6\") DESC LIMIT 5;");
    }



    /////////////////7월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_7\")/(SELECT SUM(\"2023_7\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_7\") DESC LIMIT 5;");
    }


    /////////////////8월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_8\")/(SELECT SUM(\"2023_8\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_8\") DESC LIMIT 5;");
    }

    /////////////////9월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\" + \"2023_10\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\" + \"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_9\")/(SELECT SUM(\"2023_9\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_9\") DESC LIMIT 5;");
    }

    /////////////////10월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\" + \"2023_11\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_10\" + \"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_10\")/(SELECT SUM(\"2023_10\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_10\") DESC LIMIT 5;");
    }


    /////////////////11월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "11" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_11\") AS sale ,ROUND((total(\"2023_11\")/(SELECT SUM(\"2023_11\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_11\") DESC LIMIT 5;");
    }
    else if(ui->Session_Month_First_ComboBox->currentText() == "11" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_11\" + \"2023_12\") AS sale ,ROUND((total(\"2023_11\")/(SELECT SUM(\"2023_11\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_11\") DESC LIMIT 5;");
    }


    /////////////////12월///////////////////////////


    if(ui->Session_Month_First_ComboBox->currentText() == "12" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT BRAND AS company, sum(\"2023_12\") AS sale ,ROUND((total(\"2023_12\")/(SELECT SUM(\"2023_12\") FROM CAR_TB WHERE BRAND > 6))*100, 0) as percent FROM CAR_TB WHERE BRAND BETWEEN 7 AND 11 GROUP BY BRAND ORDER BY SUM(\"2023_12\") DESC LIMIT 5;");
    }

    if (QueryLoadData.exec()) // 실행
    {
        int NumberOFRowsToDisplay = 5; // 행의개수

        ui->Brand_Car_Foreign->setRowCount(NumberOFRowsToDisplay); // Brand_Car_Korea의 행의 개수
        int RowNumber = 0; // 데이터 행넘버초기화, 0부터시작


        while (QueryLoadData.next()) // 데이터반복
        {
            // ui->Brand_Car_Korea->insertRow(RowNumber); // Row 행번호 표시

            ui->Brand_Car_Foreign->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Brand_Car_Foreign->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));
            ui->Brand_Car_Foreign->setItem(RowNumber, 2, new QTableWidgetItem(QString::number(QueryLoadData.value("percent").toDouble(),'f',2)));
            RowNumber = RowNumber + 1; // 넘버 1씩 증가
        }
    }
    //////////////////////국산 top10
    ///
    ///
    ///
    ///
    ///
    ///////////////1월
    ///
    ///
    ///
    if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "1")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_1\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "2")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "3")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "1" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_1\" + \"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_1\") desc LIMIT 10;");
    }

    //////////////////////////// 2월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "2")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_2\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "3")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "2" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_2\" + \"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_2\") desc LIMIT 10;");
    }

    //////////////////////////// 3월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "3")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_3\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "3" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_3\" + \"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_3\") desc LIMIT 10;");
    }


    //////////////////////////// 4월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "4")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_4\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "4" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_4\" + \"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_4\") desc LIMIT 10;");
    }

    //////////////////////////// 5월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "5")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_5\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "5" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_5\" + \"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_5\") desc LIMIT 10;");
    }

    //////////////////////////// 6월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "6")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_6\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\" + \"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_6\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_6\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_6\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_6\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_6\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "6" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_6\" + \"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_6\") desc LIMIT 10;");
    }

    //////////////////////////// 7월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "7")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_7\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_7\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_7\" + \"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_7\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_7\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_7\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_7\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "7" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_7\" + \"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_7\") desc LIMIT 10;");
    }

    //////////////////////////// 8월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "8")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_8\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_8\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_8\" + \"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_8\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_8\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_8\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "8" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_8\" + \"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_8\") desc LIMIT 10;");
    }

    //////////////////////////// 9월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "9")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_9\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_9\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_9\" + \"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_9\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_9\" + \"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_9\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "9" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_9\" + \"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_9\") desc LIMIT 10;");
    }

    //////////////////////////// 10월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "10")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_10\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_10\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_10\" + \"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_10\") desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "10" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_10\" + \"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_10\") desc LIMIT 10;");
    }

    //////////////////////////// 11월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "11" && ui->Session_Month_Last_ComboBox->currentText() == "11")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_11\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_11\" desc LIMIT 10;");
    }
    else if(ui->Select_Month_ComboBox->currentText() == "11" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_11\" + \"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by sum(\"2023_11\") desc LIMIT 10;");
    }

    //////////////////////////// 12월
    ///
    ///
    ///


    if(ui->Select_Month_ComboBox->currentText() == "12" && ui->Session_Month_Last_ComboBox->currentText() == "12")
    {
        QueryLoadData.prepare("SELECT MODEL AS company, sum(\"2023_12\") AS sale FROM CAR_TB WHERE BRAND BETWEEN 1 and 6 GROUP BY MODEL order by \"2023_12\" desc LIMIT 10;");
    }






    if (QueryLoadData.exec()) // 실행
    {
        int NumberOFRowsToDisplay = 10; // 행의개수

        ui->Model_Car_Korea->setRowCount(NumberOFRowsToDisplay); // Brand_Car_Korea의 행의 개수
        int RowNumber = 0; // 데이터 행넘버초기화, 0부터시작


        while (QueryLoadData.next()) // 데이터반복
        {
            // ui->Brand_Car_Korea->insertRow(RowNumber); // Row 행번호 표시

            ui->Model_Car_Korea->setItem(RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("company").toString())));
            ui->Model_Car_Korea->setItem(RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("sale").toString())));
            ui->Model_Car_Korea->setItem(RowNumber, 2, new QTableWidgetItem(QString::number(QueryLoadData.value("percent").toDouble(),'f',2)));
            RowNumber = RowNumber + 1; // 넘버 1씩 증가
        }
    }



    QSqlDatabase::database().commit();
    DB_Connection.close();
}
